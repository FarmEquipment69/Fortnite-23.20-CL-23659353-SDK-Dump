// Class /Script/FortniteAI.FortIntensityCurveSequence
// Size: 0x48
class UFortIntensityCurveSequence : public UDataAsset
{
	struct TArray<struct FDataTableRowHandle> IntensityCurves; // 0x30 (0x10)
	struct TEnumAsByte<EFortIntensityCurveSequenceType> SequenceType; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

