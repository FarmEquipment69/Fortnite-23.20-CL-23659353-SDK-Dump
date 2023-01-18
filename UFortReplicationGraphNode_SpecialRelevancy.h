// Class /Script/FortniteGame.FortReplicationGraphNode_SpecialRelevancy
// Size: 0x310
class UFortReplicationGraphNode_SpecialRelevancy : public UReplicationGraphNode_GridSpatialization2D
{
	unsigned char unreflected_260[0x28]; // 0x260 (0x28) 
	struct TArray<struct FSpecialRelevancyGroup> RelevancyGroups; // 0x288 (0x10)
	class UClass* PlayerPawnClass; // 0x298 (0x8)
	struct TArray<class UClass*> ProjectileClasses; // 0x2a0 (0x10)
	struct TArray<class UClass*> SpecialActorClasses; // 0x2b0 (0x10)
	struct FSpecialRelevancyModeData* CurrentRelevancyModeData; // 0x2c0 (0x8)
	struct TArray<class USpecialRelevancyComponentBase*> RelevancyComponents; // 0x2c8 (0x10)
	bool bUseFastCompPath; // 0x2d8 (0x1)
	unsigned char unreflected_2d9[0x3]; // 0x2d9 (0x3) 
	int MostToUpdateIn1Frame; // 0x2dc (0x4)
	struct TArray<class USpecialRelevancyComponentBase*> FastCompPathArray; // 0x2e0 (0x10)
	unsigned char padding_2f0[0x20]; // 0x2f0 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortReplicationGraphNode_SpecialRelevancy.OnSquadIdChanged (Underlying native function: OnSquadIdChanged 0x85246ec)
	void OnSquadIdChanged(class AFortPlayerStateAthena*& PlayerState, unsigned char& OldSquadIndex); // (Final | Native | Protected)
};

