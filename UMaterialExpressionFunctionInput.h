// Class /Script/Engine.MaterialExpressionFunctionInput
// Size: 0x160
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
	struct FExpressionInput Preview; // 0xb0 (0x28)
	struct FName InputName; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FString Description; // 0xe0 (0x10)
	struct FGuid ID; // 0xf0 (0x10)
	struct TEnumAsByte<EFunctionInputType> InputType; // 0x100 (0x1)
	unsigned char unreflected_101[0xf]; // 0x101 (0xf) 
	struct FVector4f PreviewValue; // 0x110 (0x10)
	unsigned char bUsePreviewValueAsDefault; // 0x120 (0x1)
	unsigned char unreflected_121[0x3]; // 0x121 (0x3) 
	int SortPriority; // 0x124 (0x4)
	unsigned char bCompilingFunctionPreview; // 0x128 (0x1)
	unsigned char padding_129[0x37]; // 0x129 (0x37)
};

