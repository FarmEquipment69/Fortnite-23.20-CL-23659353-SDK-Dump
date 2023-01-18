// ScriptStruct /Script/SpecialEventGameplayRuntime.SpecialEventCursorMode
// Size: 0x298
struct FSpecialEventCursorMode
{
	class UClass* WidgetClass; // 0x0 (0x8)
	bool bAllowDebugCursorDrawing; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	struct FSpecialEventMathEaseData GamepadMoveEaseData; // 0xc (0xc)
	struct FScalableFloat GamepadMoveSpeed; // 0x18 (0x28)
	struct FSpecialEventMathEaseData TouchMoveEaseData; // 0x40 (0xc)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FScalableFloat TouchMoveSpeed; // 0x50 (0x28)
	float TouchDeadzoneTreshold; // 0x78 (0x4)
	float TouchAttenuator; // 0x7c (0x4)
	struct FScalableFloat MinCursorPercentForAdditiveRotationPitch; // 0x80 (0x28)
	struct FScalableFloat MinCursorPercentForAdditiveRotationYaw; // 0xa8 (0x28)
	struct FScalableFloat MaxAdditiveRotationPitch; // 0xd0 (0x28)
	struct FScalableFloat MaxAdditiveRotationYaw; // 0xf8 (0x28)
	struct FScalableFloat AdditiveRotationInterpSpeed; // 0x120 (0x28)
	struct FScalableFloat ZoomInInterpSpeed; // 0x148 (0x28)
	struct FScalableFloat ZoomOutInterpSpeed; // 0x170 (0x28)
	struct FScalableFloat ZoomAdditiveFOV; // 0x198 (0x28)
	struct FScalableFloat GamepadZoomMoveSpeed; // 0x1c0 (0x28)
	struct FScalableFloat TouchZoomMoveSpeed; // 0x1e8 (0x28)
	bool bAllowTrace; // 0x210 (0x1)
	struct TEnumAsByte<ECollisionChannel> TraceChannel; // 0x211 (0x1)
	unsigned char unreflected_212[0x6]; // 0x212 (0x6) 
	struct FScalableFloat SweepRadius; // 0x218 (0x28)
	struct FScalableFloat TraceDistance; // 0x240 (0x28)
	struct FScalableFloat bTraceComplex; // 0x268 (0x28)
	unsigned char padding_290[0x8]; // 0x290 (0x8)
};

