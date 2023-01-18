// Class /Script/Engine.MaterialExpressionSceneTexture
// Size: 0xe0
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
	struct FExpressionInput Coordinates; // 0xb0 (0x28)
	struct TEnumAsByte<ESceneTextureId> SceneTextureId; // 0xd8 (0x1)
	bool bFiltered; // 0xd9 (0x1)
	unsigned char padding_da[0x6]; // 0xda (0x6)
};

