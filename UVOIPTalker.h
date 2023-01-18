// Class /Script/Engine.VOIPTalker
// Size: 0xe0
class UVOIPTalker : public UActorComponent
{
	struct FVoiceSettings Settings; // 0xa0 (0x18)
	unsigned char padding_b8[0x28]; // 0xb8 (0x28)

	/* Functions */

	// Function /Script/Engine.VOIPTalker.RegisterWithPlayerState (Underlying native function: RegisterWithPlayerState 0x9fc6cf8)
	void RegisterWithPlayerState(class APlayerState*& OwningState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VOIPTalker.GetVoiceLevel (Underlying native function: GetVoiceLevel 0x87b2c90)
	float GetVoiceLevel(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VOIPTalker.CreateTalkerForPlayer (Underlying native function: CreateTalkerForPlayer 0x9fc3b38)
	static class UVOIPTalker* CreateTalkerForPlayer(class APlayerState*& OwningState); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.VOIPTalker.BPOnTalkingEnd (Underlying native function: BPOnTalkingEnd 0x206352c)
	void BPOnTalkingEnd(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/Engine.VOIPTalker.BPOnTalkingBegin (Underlying native function: BPOnTalkingBegin 0x709e2f8)
	void BPOnTalkingBegin(class UAudioComponent*& AudioComponent); // (Native | Event | Protected | BlueprintEvent)
};

