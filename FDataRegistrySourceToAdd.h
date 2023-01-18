// ScriptStruct /Script/GameFeatures.DataRegistrySourceToAdd
// Size: 0x60
struct FDataRegistrySourceToAdd
{
	struct FName RegistryToAddTo; // 0x0 (0x4)
	int AssetPriority; // 0x4 (0x4)
	unsigned char bClientSource; // 0x8 (0x1)
	unsigned char bServerSource; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TWeakObjectPtr<class UDataTable> DataTableToAdd; // 0x10 (0x28)
	struct TWeakObjectPtr<class UCurveTable> CurveTableToAdd; // 0x38 (0x28)
};

