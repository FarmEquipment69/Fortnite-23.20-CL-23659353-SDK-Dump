// Class /Script/FortniteGame.FortCreativeDynamicXpComponent
// Size: 0x1a0
class UFortCreativeDynamicXpComponent : public UActorComponent
{
	class UFortDynamicXpCalculator* XpCalculator; // 0xa0 (0x8)
	unsigned char unreflected_a8[0x10]; // 0xa8 (0x10) 
	struct TMap<struct FGuid, struct TWeakObjectPtr<class UFortCreativeAccoladesComponent>> AccoladeDevices; // 0xb8 (0x50)
	struct TMap<struct FUniqueNetIdRepl, struct FDynamicXpPlayerSession> AllPlayers; // 0x108 (0x50)
	class AFortMinigame* Minigame; // 0x158 (0x8)
	unsigned char unreflected_160[0x8]; // 0x160 (0x8) 
	struct FDateTime* CalibrationTimestamp; // 0x168 (0x8)
	struct FDateTime* AggregatedStatsTimestamp; // 0x170 (0x8)
	struct FOnlineLinkId LinkId; // 0x178 (0x18)
	unsigned char padding_190[0x10]; // 0x190 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeDynamicXpComponent.OnPlayerRemovedMinigame (Underlying native function: OnPlayerRemovedMinigame 0x8782c88)
	void OnPlayerRemovedMinigame(struct FUniqueNetIdRepl& UniqueNetId, bool& bIsLocalPlayer); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeDynamicXpComponent.OnPlayerAddedMinigame (Underlying native function: OnPlayerAddedMinigame 0x8782c88)
	void OnPlayerAddedMinigame(struct FUniqueNetIdRepl& UniqueNetId, bool& bIsLocalPlayer); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeDynamicXpComponent.OnMinigameStarted (Underlying native function: OnMinigameStarted 0x26daa0c)
	void OnMinigameStarted(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeDynamicXpComponent.OnMinigameSetUp (Underlying native function: OnMinigameSetUp 0x5d2cb00)
	void OnMinigameSetUp(class AFortMinigame*& NewMinigame); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeDynamicXpComponent.OnMinigameEnded (Underlying native function: OnMinigameEnded 0x26daa0c)
	void OnMinigameEnded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeDynamicXpComponent.OnEndMatchForPlayer (Underlying native function: OnEndMatchForPlayer 0x71a663c)
	void OnEndMatchForPlayer(class UFortControllerComponent_EndMatchPersistence*& EndMatchPersistence); // (Final | Native | Private)
};

