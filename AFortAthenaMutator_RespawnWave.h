// Class /Script/FortniteGame.FortAthenaMutator_RespawnWave
// Size: 0x3d0
class AFortAthenaMutator_RespawnWave : public AFortAthenaMutator
{
	struct FScalableFloat DefaultWaveTime; // 0x330 (0x28)
	struct FScalableFloat WaveTeamImbalanceTimeMultiplier; // 0x358 (0x28)
	struct FMulticastInlineDelegate OnWaveDataChanged; // 0x380 (0x10)
	struct FScalableFloat MinRespawnWindowTimeReamining; // 0x390 (0x28)
	struct TArray<struct FFortAthenaMutator_RespawnWaveTeamData> WaveDataArray; // 0x3b8 (0x10)
	unsigned char padding_3c8[0x8]; // 0x3c8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnWave.OnWaveLaunched (Underlying native function: OnWaveLaunched 0x26daa0c)
	void OnWaveLaunched(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnWave.OnRep_WaveDataArray (Underlying native function: OnRep_WaveDataArray 0x8505f48)
	void OnRepWaveDataArray(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnWave.GetWaveTime (Underlying native function: GetWaveTime 0x8505054)
	float GetWaveTime(unsigned char& Team); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnWave.GetTimeUntilNextWave (Underlying native function: GetTimeUntilNextWave 0x8504fc4)
	float GetTimeUntilNextWave(class AFortPlayerStateAthena*& PlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnWave.GetNextWavePlayerStates (Underlying native function: GetNextWavePlayerStates 0x8504dac)
	void GetNextWavePlayerStates(class AFortPlayerStateAthena*& PlayerState, struct TArray<class AFortPlayerStateAthena*>& OutPlayerStates); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_RespawnWave.GetNextWavePlayerCount (Underlying native function: GetNextWavePlayerCount 0x8504d14)
	int GetNextWavePlayerCount(class AFortPlayerStateAthena*& PlayerState); // (Final | Native | Public | BlueprintCallable)
};

