// ScriptStruct /Script/FortniteGame.FortWindMaterialData
// Size: 0x48
struct FFortWindMaterialData
{
	class UMaterialInstanceDynamic* Mid; // 0x0 (0x8)
	class UMaterialInstanceDynamic* IntenseStateMID; // 0x8 (0x8)
	int MaterialParameterPairIndices; // 0x10 (0x4)
	int WindVectorParameterIndex; // 0x14 (0x4)
	struct TArray<struct FWindScalarMaterialInterpolationData> ScalarInterpolationData; // 0x18 (0x10)
	struct TArray<struct FWindVectorMaterialInterpolationData> VectorInterpolationData; // 0x28 (0x10)
	struct TArray<struct FFortWindMaterialParameterPairID> ParametersToSet; // 0x38 (0x10)
};

