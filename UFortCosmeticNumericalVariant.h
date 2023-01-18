// Class /Script/FortniteGame.FortCosmeticNumericalVariant
// Size: 0xa0
class UFortCosmeticNumericalVariant : public UFortCosmeticVariant
{
	int DefaultStartingNumeric; // 0x78 (0x4)
	int MinNumericalValue; // 0x7c (0x4)
	int MaxNumbericalValue; // 0x80 (0x4)
	struct FName ZerosDigitParamName; // 0x84 (0x4)
	struct FName TensDigitParamName; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> MaterialsToAlter; // 0x90 (0x10)
};

