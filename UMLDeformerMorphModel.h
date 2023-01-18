// Class /Script/MLDeformerFramework.MLDeformerMorphModel
// Size: 0x110
class UMLDeformerMorphModel : public UMLDeformerGeomCacheModel
{
	unsigned char unreflected_e0[0x20]; // 0xe0 (0x20) 
	bool bIncludeNormals; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	float MorphTargetDeltaThreshold; // 0x104 (0x4)
	float MorphTargetErrorTolerance; // 0x108 (0x4)
	enum EMLDeformerMaskChannel MaskChannel; // 0x10c (0x1)
	bool bInvertMaskChannel; // 0x10d (0x1)
	unsigned char padding_10e[0x2]; // 0x10e (0x2)

	/* Functions */

	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltas (Underlying native function: SetMorphTargetDeltas 0x563b8f0)
	void SetMorphTargetDeltas(struct TArray<struct FVector3f>& Deltas); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltaFloats (Underlying native function: SetMorphTargetDeltaFloats 0x563b840)
	void SetMorphTargetDeltaFloats(struct TArray<float>& Deltas); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

