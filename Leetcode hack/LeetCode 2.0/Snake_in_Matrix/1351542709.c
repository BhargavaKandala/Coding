int finalPositionOfSnake(int n, char** commands, int commandsSize) {
    int row = 0, col = 0;
    int direction_map[4][2] = {
        {-1, 0}, // UP
        {1, 0},  // DOWN
        {0, -1}, // LEFT
        {0, 1}    // RIGHT
    };
    char *direction_names[4] = {"UP", "DOWN", "LEFT", "RIGHT"};

    // Process each command
    for (int i = 0; i < commandsSize; i++) {
        for (int j = 0; j < 4; j++) {
            if (strcmp(commands[i], direction_names[j]) == 0) {
                row += direction_map[j][0];
                col += direction_map[j][1];
                break;
            }
        }
    }

    // Calculate the final position in the grid
    int final_position = row * n + col;
    return final_position;
}