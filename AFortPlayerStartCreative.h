// Class /Script/FortniteGame.FortPlayerStartCreative
// Size: 0x340
class AFortPlayerStartCreative : public APlayerStart
{
	struct FGameplayTagContainer PlayerStartTags; // 0x2b8 (0x20)
	int PortalIndex; // 0x2d8 (0x4)
	unsigned char ApplicableTeam; // 0x2dc (0x1)
	unsigned char unreflected_2dd[0x3]; // 0x2dd (0x3) 
	int ApplicableClass; // 0x2e0 (0x4)
	bool bUseAsIslandStart; // 0x2e4 (0x1)
	unsigned char unreflected_2e5[0x3]; // 0x2e5 (0x3) 
	int PriorityGroup; // 0x2e8 (0x4)
	float EnemyRangeCheck; // 0x2ec (0x4)
	struct FString LockedPlayerNameSubstring; // 0x2f0 (0x10)
	bool bIsEnabled; // 0x300 (0x1)
	unsigned char unreflected_301[0x7]; // 0x301 (0x7) 
	class UFortCreativeVolumeLinkComponent* CreativeLinkComponent; // 0x308 (0x8)
	unsigned char padding_310[0x30]; // 0x310 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerStartCreative.OnMinigameStarted (Underlying native function: OnMinigameStarted 0x899d4d0)
	void OnMinigameStarted(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerStartCreative.IsClaimedByPlayer (Underlying native function: IsClaimedByPlayer 0x899cd04)
	bool IsClaimedByPlayer(struct FUniqueNetIdRepl& UniqueId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

