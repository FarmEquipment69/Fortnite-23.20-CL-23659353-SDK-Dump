// Class /Script/Engine.MaterialExpressionComment
// Size: 0xe0
class UMaterialExpressionComment : public UMaterialExpression
{
	int SizeX; // 0xb0 (0x4)
	int SizeY; // 0xb4 (0x4)
	struct FString Text; // 0xb8 (0x10)
	struct FLinearColor CommentColor; // 0xc8 (0x10)
	int FontSize; // 0xd8 (0x4)
	unsigned char padding_dc[0x4]; // 0xdc (0x4)
};

