// Class /Script/MLDeformerRuntime.MLDeformerAssetMapping
// Size: 0x120
class UMLDeformerAssetMapping : public UPrimaryDataAsset
{
	struct TMap<struct TWeakObjectPtr<class UAthenaCharacterItemDefinition>, struct TWeakObjectPtr<class UMLDeformerAsset>> CharacterItemDefinitionToMLDeformerAssetMap; // 0x30 (0x50)
	struct TMap<struct TWeakObjectPtr<class UCustomCharacterPart>, struct TWeakObjectPtr<class UMLDeformerAsset>> CharacterPartToMLDeformerAssetMap; // 0x80 (0x50)
	struct TMap<struct TWeakObjectPtr<class UMLDeformerAsset>, struct TWeakObjectPtr<class UMeshDeformer>> MLDeformerToMeshDeformerAssetMap; // 0xd0 (0x50)
};

