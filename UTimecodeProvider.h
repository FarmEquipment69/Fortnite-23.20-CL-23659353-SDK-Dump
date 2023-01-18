// Class /Script/Engine.TimecodeProvider
// Size: 0x30
class UTimecodeProvider : public UObject
{
	float FrameDelay; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)

	/* Functions */

	// Function /Script/Engine.TimecodeProvider.GetTimecode (Underlying native function: GetTimecode 0x9d7ae68)
	struct FTimecode GetTimecode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimecodeProvider.GetSynchronizationState (Underlying native function: GetSynchronizationState 0x8a63e98)
	enum ETimecodeProviderSynchronizationState GetSynchronizationState(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimecodeProvider.GetQualifiedFrameTime (Underlying native function: GetQualifiedFrameTime 0x9d7ac98)
	struct FQualifiedFrameTime GetQualifiedFrameTime(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimecodeProvider.GetFrameRate (Underlying native function: GetFrameRate 0x9d7a9e8)
	struct FFrameRate* GetFrameRate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimecodeProvider.GetDelayedTimecode (Underlying native function: GetDelayedTimecode 0x9d7a994)
	struct FTimecode GetDelayedTimecode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimecodeProvider.GetDelayedQualifiedFrameTime (Underlying native function: GetDelayedQualifiedFrameTime 0x9d7a964)
	struct FQualifiedFrameTime GetDelayedQualifiedFrameTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimecodeProvider.FetchTimecode (Underlying native function: FetchTimecode 0x9d7a7a0)
	bool FetchTimecode(struct FQualifiedFrameTime& OutFrameTime); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TimecodeProvider.FetchAndUpdate (Underlying native function: FetchAndUpdate 0x735d960)
	void FetchAndUpdate(); // (Native | Public | BlueprintCallable)
};

