// Class /Script/DaySequence.DaySequenceActor
// Size: 0x358
class ADaySequenceActor : public AInfo
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	class UDaySequencePlayer* SequencePlayer; // 0x298 (0x8)
	struct TArray<class UDaySequence*> DaySequenceAssets; // 0x2a0 (0x10)
	class UMovieSceneBindingOverrides* BindingOverrides; // 0x2b0 (0x8)
	unsigned char bReplicatePlayback; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x7]; // 0x2b9 (0x7) 
	class UDaySequence* MainSequence; // 0x2c0 (0x8)
	bool bRunDayCycle; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x3]; // 0x2c9 (0x3) 
	struct FTimecode DayLength; // 0x2cc (0x14)
	struct FTimecode TimePerCycle; // 0x2e0 (0x14)
	struct FTimecode InitialTimeOfDay; // 0x2f4 (0x14)
	unsigned char padding_308[0x50]; // 0x308 (0x50)

	/* Functions */

	// Function /Script/DaySequence.DaySequenceActor.SetTimeOfDay (Underlying native function: SetTimeOfDay 0x7fb1d84)
	bool SetTimeOfDay(float& InHours); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.SetReplicatePlayback (Underlying native function: SetReplicatePlayback 0x7fb1cf0)
	void SetReplicatePlayback(bool& ReplicatePlayback); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.SetDaySequence (Underlying native function: SetDaySequence 0x7fb1c04)
	void SetDaySequence(int& Index, class UDaySequence*& InSequence); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.SetBias (Underlying native function: SetBias 0x7fb1a6c)
	void SetBias(struct FString& SequenceKey, int& Bias); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.RemoveDaySequence (Underlying native function: RemoveDaySequence 0x7fb1998)
	void RemoveDaySequence(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.Play (Underlying native function: Play 0x7fb1984)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.Pause (Underlying native function: Pause 0x7fb1970)
	void Pause(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.NumDaySequences (Underlying native function: NumDaySequences 0x2d00ed4)
	int NumDaySequences(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.MuteSequence (Underlying native function: MuteSequence 0x1969628)
	void MuteSequence(struct FString& SequenceKey, bool& bState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.Multicast_SetTimePerCycle (Underlying native function: Multicast_SetTimePerCycle 0x76c8a88)
	void MulticastSetTimePerCycle(float& InHours); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/DaySequence.DaySequenceActor.IsPlaying (Underlying native function: IsPlaying 0x7fb1944)
	bool IsPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.IsPaused (Underlying native function: IsPaused 0x7fb1924)
	bool IsPaused(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.IsMuteSequence (Underlying native function: IsMuteSequence 0x7fb17c0)
	bool IsMuteSequence(struct FString& SequenceKey); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.GetTimePerCycle (Underlying native function: GetTimePerCycle 0x7fb1798)
	float GetTimePerCycle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.GetTimeOfDay (Underlying native function: GetTimeOfDay 0x7fb1770)
	float GetTimeOfDay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.GetSequencePlayer (Underlying native function: GetSequencePlayer 0x7fb1750)
	class UDaySequencePlayer* GetSequencePlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.GetInitialTimeOfDay (Underlying native function: GetInitialTimeOfDay 0x7fb1680)
	float GetInitialTimeOfDay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.GetFirstDaySequence (Underlying native function: GetFirstDaySequence 0x7fb1660)
	class UDaySequence* GetFirstDaySequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.GetDaySequence (Underlying native function: GetDaySequence 0x7fb1598)
	class UDaySequence* GetDaySequence(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.GetDayLength (Underlying native function: GetDayLength 0x7fb1570)
	float GetDayLength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceActor.GetBias (Underlying native function: GetBias 0x7fb10bc)
	int GetBias(struct FString& SequenceKey); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceActor.AddDaySequence (Underlying native function: AddDaySequence 0x7fb0d74)
	int AddDaySequence(class UDaySequence*& InSequence); // (Final | Native | Public | BlueprintCallable)
};

