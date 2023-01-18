// Class /Script/Engine.Canvas
// Size: 0x390
class UCanvas : public UObject
{
	float OrgX; // 0x28 (0x4)
	float OrgY; // 0x2c (0x4)
	float ClipX; // 0x30 (0x4)
	float ClipY; // 0x34 (0x4)
	struct FColor DrawColor; // 0x38 (0x4)
	unsigned char bCenterX; // 0x3c (0x1)
	unsigned char bCenterY; // 0x3c (0x1)
	unsigned char bNoSmooth; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	int SizeX; // 0x40 (0x4)
	int SizeY; // 0x44 (0x4)
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	struct FPlane ColorModulate; // 0x50 (0x20)
	class UTexture2D* DefaultTexture; // 0x70 (0x8)
	class UTexture2D* GradientTexture0; // 0x78 (0x8)
	class UReporterGraph* ReporterGraph; // 0x80 (0x8)
	unsigned char padding_88[0x308]; // 0x88 (0x308)

	/* Functions */

	// Function /Script/Engine.Canvas.K2_TextSize (Underlying native function: K2_TextSize 0x9fc5fe8)
	struct FVector2D K2TextSize(class UFont*& RenderFont, struct FString& RenderText, struct FVector2D& Scale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_StrLen (Underlying native function: K2_StrLen 0x9fc5dcc)
	struct FVector2D K2StrLen(class UFont*& RenderFont, struct FString& RenderText); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_Project (Underlying native function: K2_Project 0x9fc5d0c)
	struct FVector K2Project(struct FVector& WorldLocation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_DrawTriangle (Underlying native function: K2_DrawTriangle 0x9fc5b58)
	void K2DrawTriangle(class UTexture*& RenderTexture, struct TArray<struct FCanvasUVTri>& Triangles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_DrawTexture (Underlying native function: K2_DrawTexture 0x9fc5888)
	void K2DrawTexture(class UTexture*& RenderTexture, struct FVector2D& ScreenPosition, struct FVector2D& ScreenSize, struct FVector2D& CoordinatePosition, struct FVector2D& CoordinateSize, struct FLinearColor& RenderColor, struct TEnumAsByte<EBlendMode>& BlendMode, float& Rotation, struct FVector2D& PivotPoint); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_DrawText (Underlying native function: K2_DrawText 0x9fc5328)
	void K2DrawText(class UFont*& RenderFont, struct FString& RenderText, struct FVector2D& ScreenPosition, struct FVector2D& Scale, struct FLinearColor& RenderColor, float& Kerning, struct FLinearColor& ShadowColor, struct FVector2D& ShadowOffset, bool& bCentreX, bool& bCentreY, bool& bOutlined, struct FLinearColor& OutlineColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_DrawPolygon (Underlying native function: K2_DrawPolygon 0x9fc5108)
	void K2DrawPolygon(class UTexture*& RenderTexture, struct FVector2D& ScreenPosition, struct FVector2D& Radius, int& NumberOfSides, struct FLinearColor& RenderColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_DrawMaterialTriangle (Underlying native function: K2_DrawMaterialTriangle 0x9fc4e18)
	void K2DrawMaterialTriangle(class UMaterialInterface*& RenderMaterial, struct TArray<struct FCanvasUVTri>& Triangles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_DrawMaterial (Underlying native function: K2_DrawMaterial 0x9fc4ad0)
	void K2DrawMaterial(class UMaterialInterface*& RenderMaterial, struct FVector2D& ScreenPosition, struct FVector2D& ScreenSize, struct FVector2D& CoordinatePosition, struct FVector2D& CoordinateSize, float& Rotation, struct FVector2D& PivotPoint); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_DrawLine (Underlying native function: K2_DrawLine 0x9fc4964)
	void K2DrawLine(struct FVector2D& ScreenPositionA, struct FVector2D& ScreenPositionB, float& Thickness, struct FLinearColor& RenderColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_DrawBox (Underlying native function: K2_DrawBox 0x9fc47f8)
	void K2DrawBox(struct FVector2D& ScreenPosition, struct FVector2D& ScreenSize, float& Thickness, struct FLinearColor& RenderColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_DrawBorder (Underlying native function: K2_DrawBorder 0x9fc41d4)
	void K2DrawBorder(class UTexture*& BorderTexture, class UTexture*& BackgroundTexture, class UTexture*& LeftBorderTexture, class UTexture*& RightBorderTexture, class UTexture*& TopBorderTexture, class UTexture*& BottomBorderTexture, struct FVector2D& ScreenPosition, struct FVector2D& ScreenSize, struct FVector2D& CoordinatePosition, struct FVector2D& CoordinateSize, struct FLinearColor& RenderColor, struct FVector2D& BorderScale, struct FVector2D& BackgroundScale, float& Rotation, struct FVector2D& PivotPoint, struct FVector2D& CornerSize); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Canvas.K2_Deproject (Underlying native function: K2_Deproject 0x9fc40a0)
	void K2Deproject(struct FVector2D& ScreenPosition, struct FVector& WorldOrigin, struct FVector& WorldDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

