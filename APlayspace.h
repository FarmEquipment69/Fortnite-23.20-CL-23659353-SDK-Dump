// Class /Script/PlayspaceSystem.Playspace
// Size: 0x558
class APlayspace : public AInfo
{
	struct FMulticastInlineDelegate NotifyPlayspaceUserAdded; // 0x288 (0x10)
	unsigned char unreflected_298[0x18]; // 0x298 (0x18) 
	struct FMulticastInlineDelegate NotifyPlayspaceUserRemoved; // 0x2b0 (0x10)
	unsigned char unreflected_2c0[0x18]; // 0x2c0 (0x18) 
	struct FMulticastInlineDelegate NotifyPlayspaceInitialized; // 0x2d8 (0x10)
	unsigned char unreflected_2e8[0x18]; // 0x2e8 (0x18) 
	struct FMulticastInlineDelegate NotifyStartMatch; // 0x300 (0x10)
	unsigned char unreflected_310[0x18]; // 0x310 (0x18) 
	struct FMulticastInlineDelegate NotifyEndMatch; // 0x328 (0x10)
	unsigned char unreflected_338[0x18]; // 0x338 (0x18) 
	struct FGameplayTagContainer GameplayTags; // 0x350 (0x20)
	struct FGameplayTag RequestedPlayspaceParentTag; // 0x370 (0x4)
	unsigned char unreflected_374[0x4]; // 0x374 (0x4) 
	struct TArray<class UClass*> ChildPlayspaceClasses; // 0x378 (0x10)
	struct FPlayspaceUserList PlayspaceUsers; // 0x388 (0x178)
	struct TArray<class APlayspace*> ChildPlayspaces; // 0x500 (0x10)
	struct TArray<struct FUniqueNetIdRepl> PendingUsers; // 0x510 (0x10)
	bool bAutoStartMatchOnServerStart; // 0x520 (0x1)
	enum EWithinBoundsEvaluationType BoundsEvaluationType; // 0x521 (0x1)
	unsigned char unreflected_522[0x6]; // 0x522 (0x6) 
	class UPlayspaceManagerComponent* PlayspaceManagerCached; // 0x528 (0x8)
	class AGameplayVolume* BoundGameplayVolume; // 0x530 (0x8)
	bool bIsInitialized; // 0x538 (0x1)
	unsigned char unreflected_539[0x1]; // 0x539 (0x1) 
	bool bMatchHasEnded; // 0x53a (0x1)
	unsigned char unreflected_53b[0x1]; // 0x53b (0x1) 
	float MatchStartTime; // 0x53c (0x4)
	unsigned char padding_540[0x18]; // 0x540 (0x18)

	/* Functions */

	// Function /Script/PlayspaceSystem.Playspace.OnRep_PlayspaceUsers (Underlying native function: OnRep_PlayspaceUsers 0x21fefe0)
	void OnRepPlayspaceUsers(); // (Final | Native | Protected)

	// Function /Script/PlayspaceSystem.Playspace.OnRep_MatchStartTime (Underlying native function: OnRep_MatchStartTime 0x2daad1c)
	void OnRepMatchStartTime(); // (Native | Protected)

	// Function /Script/PlayspaceSystem.Playspace.OnRep_bMatchHasEnded (Underlying native function: OnRep_bMatchHasEnded 0x10c4ce8)
	void OnRepbMatchHasEnded(); // (Final | Native | Protected)

	// Function /Script/PlayspaceSystem.Playspace.OnRep_bIsInitialized (Underlying native function: OnRep_bIsInitialized 0xf9b810)
	void OnRepbIsInitialized(); // (Final | Native | Protected)
};

