// Class /Script/Engine.CompositeCurveTable
// Size: 0xc8
class UCompositeCurveTable : public UCurveTable
{
	struct TArray<class UCurveTable*> ParentTables; // 0xa0 (0x10)
	struct TArray<class UCurveTable*> OldParentTables; // 0xb0 (0x10)
	unsigned char padding_c0[0x8]; // 0xc0 (0x8)
};

