// Class /Script/CustomizableObjectPopulation.CustomizableObjectPopulationClass
// Size: 0x90
class UCustomizableObjectPopulationClass : public UObject
{
	struct FString Name; // 0x28 (0x10)
	class UCustomizableObject* CustomizableObject; // 0x38 (0x8)
	struct TArray<struct FString> AllowList; // 0x40 (0x10)
	struct TArray<struct FString> Blocklist; // 0x50 (0x10)
	struct TArray<struct FCustomizableObjectPopulationCharacteristic> Characteristics; // 0x60 (0x10)
	struct TArray<struct FString> Tags; // 0x70 (0x10)
	unsigned char padding_80[0x10]; // 0x80 (0x10)
};

