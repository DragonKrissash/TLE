#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
     int health=0;
     for(int a=0;a<enemyEnergies.size();a++)
     health+=enemyEnergies[a];
     sort(enemyEnergies.begin(),enemyEnergies.end());
     int point=0;
     while(health>0){
        if(currentEnergy==0){
            currentEnergy=enemyEnergies[0];
            health-=enemyEnergies[0];
            enemyEnergies[0]=0;
            point++;
        }
        else{
            point++;
            int currEnemy=lower_bound(enemyEnergies.begin(),enemyEnergies.end(),currentEnergy)-enemyEnergies.begin();
            currentEnergy-=enemyEnergies[currEnemy];
            health-=enemyEnergies[currEnemy];
            enemyEnergies[currEnemy]=0;
        }
     }   
    }

int main()
{
   fastio

}
