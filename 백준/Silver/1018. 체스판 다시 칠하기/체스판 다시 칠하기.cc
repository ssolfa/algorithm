#include <iostream>
#include <algorithm>

using namespace std;

string WB[8] =
    {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"};

string BW[8] =
    {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"};

int main()
{
    int N, M, result = 64;
    cin >> N >> M;
    char str[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> str[i][j];
        }
    }

    for (int i = 0; i <= N - 8; i++)
    {
        for (int j = 0; j <= M - 8; j++)
        {
            int cnt_wb = 0, cnt_bw = 0;

            for (int x = 0; x < 8; x++)
            {
                for (int y = 0; y < 8; y++)
                {
                    if (str[i + x][j + y] != WB[x][y])
                        cnt_wb++;

                    if (str[i + x][j + y] != BW[x][y])
                        cnt_bw++;
                }
            }

            result = min(result, min(cnt_wb, cnt_bw));
        }
    }

    cout << result;
    return 0;
}
