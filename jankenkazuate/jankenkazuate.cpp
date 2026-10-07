#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int total = 0;
    double average = 0.0;

    // 1. 人数 n の入力
    cout << "テストを受ける人数 (n) を入力してください: ";
    if (!(cin >> n) || n <= 0) {
        cout << "有効な正の整数を入力してください。\n";
        return 1;
    }

    // 2. n名分の動的配列を作成
    vector<int> scores(n);

    // 3. n名分の点数を入力し、同時に合計値を計算
    cout << n << "人分の点数を入力してください:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "人目の点数: ";
        cin >> scores[i]; // ここもスッキリ書けます
        total += scores[i];
    }

    // 4. 平均値の計算
    average = static_cast<double>(total) / n;

    // 5. 結果の出力
    cout << "\n--- 計算結果 ---\n";
    cout << "合計値: " << total << " 点\n";
    cout << "平均値: " << average << " 点\n";

    return 0;
}