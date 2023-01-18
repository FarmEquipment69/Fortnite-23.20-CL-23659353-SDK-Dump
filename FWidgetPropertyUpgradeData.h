// ScriptStruct /Script/FortniteGame.WidgetPropertyUpgradeData
// Size: 0x78
struct FWidgetPropertyUpgradeData
{
	struct FGameplayTag Key; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UInstancedPropertyUpgradeMappingBase* InstancedPropertyData0; // 0x8 (0x8)
	class UInstancedPropertyUpgradeMappingBase* InstancedPropertyData1; // 0x10 (0x8)
	class UInstancedPropertyUpgradeMappingBase* InstancedPropertyData2; // 0x18 (0x8)
	class UInstancedPropertyUpgradeMappingBase* InstancedPropertyData3; // 0x20 (0x8)
	struct TMap<struct FName, class UInstancedPropertyUpgradeMappingBase*> InstancedFloatPropertyToTagPropertyMap; // 0x28 (0x50)
};

