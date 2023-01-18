// Class /Script/GameFeatures.GameFeatureAction_AddCheats
// Size: 0x60
class UGameFeatureAction_AddCheats : public UGameFeatureAction
{
	struct TArray<struct TWeakObjectPtr<class UClass>> CheatManagers; // 0x28 (0x10)
	bool bLoadCheatManagersAsync; // 0x38 (0x1)
	unsigned char unreflected_39[0xf]; // 0x39 (0xf) 
	struct TArray<struct TWeakObjectPtr<class UCheatManagerExtension>> SpawnedCheatManagers; // 0x48 (0x10)
	unsigned char padding_58[0x8]; // 0x58 (0x8)
};

