// Class /Script/Engine.MaterialExpression
// Size: 0xb0
class UMaterialExpression : public UObject
{
	int MaterialExpressionEditorX; // 0x28 (0x4)
	int MaterialExpressionEditorY; // 0x2c (0x4)
	class UEdGraphNode* GraphNode; // 0x30 (0x8)
	class UMaterialExpression* SubgraphExpression; // 0x38 (0x8)
	unsigned char unreflected_40[0x10]; // 0x40 (0x10) 
	struct FGuid MaterialExpressionGuid; // 0x50 (0x10)
	class UMaterial* Material; // 0x60 (0x8)
	class UMaterialFunction* Function; // 0x68 (0x8)
	struct FString Desc; // 0x70 (0x10)
	unsigned char unreflected_80[0x4]; // 0x80 (0x4) 
	unsigned char bRealtimePreview; // 0x84 (0x1)
	unsigned char bNeedToUpdatePreview; // 0x84 (0x1)
	unsigned char unreflected_85[0x3]; // 0x85 (0x3) 
	unsigned char bIsParameterExpression; // 0x88 (0x1)
	unsigned char unreflected_89[0x3]; // 0x89 (0x3) 
	unsigned char bCommentBubbleVisible; // 0x8c (0x1)
	unsigned char bShowOutputNameOnPin; // 0x8c (0x1)
	unsigned char bShowMaskColorsOnPin; // 0x8c (0x1)
	unsigned char bHidePreviewWindow; // 0x8c (0x1)
	unsigned char bCollapsed; // 0x8c (0x1)
	unsigned char bShaderInputData; // 0x8c (0x1)
	unsigned char bShowInputs; // 0x8c (0x1)
	unsigned char bShowOutputs; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	struct TArray<struct FText> MenuCategories; // 0x90 (0x10)
	struct TArray<struct FExpressionOutput> Outputs; // 0xa0 (0x10)
};

