# Generate 100 random values between -1000 and 1000
ARG=$(for i in $(seq 1 100); do echo $((RANDOM % 2001 - 1000)); done | tr '\n' ' ')

# Run push_swap and checker_OS, check output, and instruction count
RESULT=$(./push_swap $ARG | ./checker_Mac $ARG)
INSTRUCTION_COUNT=$(./push_swap $ARG | wc -l)

# Check if checkerOS returns "OK"
if [ "$RESULT" == "OK" ]; then
    echo "Test Passed"
    if [ "$INSTRUCTION_COUNT" -lt 700 ]; then
        echo "Score: 5 (Instruction count: $INSTRUCTION_COUNT)"
    elif [ "$INSTRUCTION_COUNT" -lt 900 ]; then
        echo "Score: 4 (Instruction count: $INSTRUCTION_COUNT)"
    elif [ "$INSTRUCTION_COUNT" -lt 1100 ]; then
        echo "Score: 3 (Instruction count: $INSTRUCTION_COUNT)"
    elif [ "$INSTRUCTION_COUNT" -lt 1300 ]; then
        echo "Score: 2 (Instruction count: $INSTRUCTION_COUNT)"
    elif [ "$INSTRUCTION_COUNT" -lt 1500 ]; then
        echo "Score: 1 (Instruction count: $INSTRUCTION_COUNT)"
    else
        echo "Score: 0 (Instruction count: $INSTRUCTION_COUNT)"
    fi
else
    echo "Test Failed: $RESULT"
fi
