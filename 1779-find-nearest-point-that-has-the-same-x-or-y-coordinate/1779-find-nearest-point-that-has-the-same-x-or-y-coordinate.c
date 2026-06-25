int nearestValidPoint(int x, int y, int** points, int pointsSize, int* pointsColSize) {
    int bestDistance = 99999;
    int ans = -1;
    for(int i = 0; i < pointsSize; i++){
        if(x == points[i][0] || y == points[i][1]){
            int dx = x - points[i][0];
            dx = (dx < 0) ? -dx : dx;
            int dy = y - points[i][1];
            dy = (dy < 0) ? -dy : dy;
            int distance =  dx + dy;
            if (distance < bestDistance){
                bestDistance = distance;
                ans = i;
            }
        }
    }
    return ans;
}