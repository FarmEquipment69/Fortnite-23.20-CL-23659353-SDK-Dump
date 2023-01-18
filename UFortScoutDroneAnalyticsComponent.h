// Class /Script/ScoutDroneRuntime.FortScoutDroneAnalyticsComponent
// Size: 0x150
class UFortScoutDroneAnalyticsComponent : public UFortControllerComponent
{
	float SessionStartTime; // 0xa0 (0x4)
	float SessionLength; // 0xa4 (0x4)
	struct FScalableFloat MinSessionLength; // 0xa8 (0x28)
	float DistanceTraveled; // 0xd0 (0x4)
	int NumberOfContainersInteractedWith; // 0xd4 (0x4)
	struct FGameplayTag DismissalReason; // 0xd8 (0x4)
	int NumberOfItemsPickedUp; // 0xdc (0x4)
	struct TArray<struct FString> DBNOCarriedPlayers; // 0xe0 (0x10)
	int NumberOfEnemiesPassivelyMarked; // 0xf0 (0x4)
	int NumberOfEnemiesMarkedOnCaw; // 0xf4 (0x4)
	int NumberOfCaws; // 0xf8 (0x4)
	unsigned char unreflected_fc[0xc]; // 0xfc (0xc) 
	struct FScalableFloat DistanceTraveledUpdateInterval; // 0x108 (0x28)
	struct FTimerHandle* DistanceTraveledUpdateTimerHandle; // 0x130 (0x8)
	struct FVector LastRecorderDroneLocation; // 0x138 (0x18)
};

