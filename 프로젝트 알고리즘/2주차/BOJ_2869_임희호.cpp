// BOJ_2869
// 2016 KB, 0 ms
/*
땅 위에 달팽이가 있다. 이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.

달팽이는 낮에 A미터 올라갈 수 있다. 하지만, 밤에 잠을 자는 동안 B미터 미끄러진다. 또, 정상에 올라간 후에는 미끄러지지 않는다.

달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.
*/
#include <iostream>

using namespace std;

int A, B, V;
int answer = 0;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(false);

	// 첫째 줄에 세 정수 A, B, V가 공백으로 구분되어서 주어진다. (1 ≤ B < A ≤ V ≤ 1,000,000,000)
	cin >> A >> B >> V;

	// 1은 남은 막대 거리가 A만큼 남았을 때 이동해서 도착하는 것을 뜻하고,
	// A - B는 실제로 하루에 가는 거리를 뜻함 
	answer = 1 + (V - A) / (A - B);

	// 위의 나눗셈에서 버림수가 있었다면 +1
	if ((V - A) % (A - B) > 0)
		answer++;

	// 첫째 줄에 달팽이가 나무 막대를 모두 올라가는데 며칠이 걸리는지 출력한다.
	cout << answer << '\n';

	return 0;
}