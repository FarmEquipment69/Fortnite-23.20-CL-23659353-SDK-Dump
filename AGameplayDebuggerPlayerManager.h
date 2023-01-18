// Class /Script/GameplayDebugger.GameplayDebuggerPlayerManager
// Size: 0x2b8
class AGameplayDebuggerPlayerManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<struct FGameplayDebuggerPlayerData> PlayerData; // 0x290 (0x10)
	struct TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations; // 0x2a0 (0x10)
	unsigned char padding_2b0[0x8]; // 0x2b0 (0x8)
};

