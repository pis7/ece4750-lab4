#!/usr/bin/bash

# Check if a filename is provided as an argument
if [ $# -eq 0 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

filename=$1
output_file="output.log"

# Check if the file exists
if [ ! -f "$filename" ]; then
    echo "File not found: $filename"
    exit 1
fi

# Read each line from the file and extract values
while IFS=, read -r test ext size design; do
    # Formulate the command using the extracted values
    command="make ../traces/${test}.${ext}/${ext}.trace.bz2.sim PHT=${size} DESIGN=${design}"

    # Run the command, capture only the line containing "Prediction"
    prediction=$(eval "$command" 2>&1 | grep "Prediction")

    # Echo both the input parameters and prediction to the console
    echo "test=$test, ext=$ext, size=$size, design=$design, $prediction"
    
    # Append both the input parameters and prediction to the output file
    echo "test=$test, ext=$ext, size=$size, design=$design, $prediction" >> "$output_file"
    
    # Check the exit status of the command
    if [ $? -ne 0 ]; then
        echo "Error running command for values: test=$test, ext=$ext, size=$size, design=$design" >> "$output_file"
    fi
done < "$filename"

echo "Script completed. Results saved to $output_file"

