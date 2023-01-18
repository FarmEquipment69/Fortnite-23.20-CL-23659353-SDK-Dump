// Class /Script/FortniteGame.FortAthenaMutator_SpawningPolicyData
// Size: 0xb0
class UFortAthenaMutator_SpawningPolicyData : public UDataAsset
{
	struct FScalableFloat NumItemsToSpawn; // 0x30 (0x28)
	struct TWeakObjectPtr<class UEnvQuery> ItemPlacementQuery; // 0x58 (0x28)
	struct TWeakObjectPtr<class UEnvQuery> ItemRemovalQuery; // 0x80 (0x28)
	float RemovalQueryInterval; // 0xa8 (0x4)
	unsigned char padding_ac[0x4]; // 0xac (0x4)
};

