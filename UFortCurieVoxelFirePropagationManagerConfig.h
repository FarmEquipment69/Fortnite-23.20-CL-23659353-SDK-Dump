// Class /Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerConfig
// Size: 0x178
class UFortCurieVoxelFirePropagationManagerConfig : public UFortCurieFirePropagationManagerConfig
{
	struct FFortCurieVoxelPropagationProperties DefaultPropagationProperties; // 0x130 (0x18)
	struct FName PropagationPropertiesRegistry; // 0x148 (0x4)
	float PropagationNoiseMinimum; // 0x14c (0x4)
	float PropagationNoiseMaximum; // 0x150 (0x4)
	float PropagationSpeedNoiseRange; // 0x154 (0x4)
	float PropagationMinimumSpeed; // 0x158 (0x4)
	float PropagationMinimumTime; // 0x15c (0x4)
	float VoxelOverlapExpansionFactor; // 0x160 (0x4)
	bool bAllowPerMaterialPropagationProperties; // 0x164 (0x1)
	unsigned char unreflected_165[0x3]; // 0x165 (0x3) 
	float ActorPropagationInteractMagnitude; // 0x168 (0x4)
	float MovedActorGrassIgnitionDelay; // 0x16c (0x4)
	float MovedActorGrassGridCellZExpansion; // 0x170 (0x4)
	float MovedActorGroundTraceZRange; // 0x174 (0x4)
};

