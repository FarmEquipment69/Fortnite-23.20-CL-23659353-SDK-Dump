// Class /Script/Engine.MaterialExpressionVolumetricAdvancedMaterialOutput
// Size: 0x1f0
class UMaterialExpressionVolumetricAdvancedMaterialOutput : public UMaterialExpressionCustomOutput
{
	struct FExpressionInput PhaseG; // 0xb0 (0x28)
	struct FExpressionInput PhaseG2; // 0xd8 (0x28)
	struct FExpressionInput PhaseBlend; // 0x100 (0x28)
	struct FExpressionInput MultiScatteringContribution; // 0x128 (0x28)
	struct FExpressionInput MultiScatteringOcclusion; // 0x150 (0x28)
	struct FExpressionInput MultiScatteringEccentricity; // 0x178 (0x28)
	struct FExpressionInput ConservativeDensity; // 0x1a0 (0x28)
	float ConstPhaseG; // 0x1c8 (0x4)
	float ConstPhaseG2; // 0x1cc (0x4)
	float ConstPhaseBlend; // 0x1d0 (0x4)
	bool PerSamplePhaseEvaluation; // 0x1d4 (0x1)
	unsigned char unreflected_1d5[0x3]; // 0x1d5 (0x3) 
	uint32_t MultiScatteringApproximationOctaveCount; // 0x1d8 (0x4)
	float ConstMultiScatteringContribution; // 0x1dc (0x4)
	float ConstMultiScatteringOcclusion; // 0x1e0 (0x4)
	float ConstMultiScatteringEccentricity; // 0x1e4 (0x4)
	bool bGroundContribution; // 0x1e8 (0x1)
	bool bGrayScaleMaterial; // 0x1e9 (0x1)
	bool bRayMarchVolumeShadow; // 0x1ea (0x1)
	bool bClampMultiScatteringContribution; // 0x1eb (0x1)
	unsigned char padding_1ec[0x4]; // 0x1ec (0x4)
};

