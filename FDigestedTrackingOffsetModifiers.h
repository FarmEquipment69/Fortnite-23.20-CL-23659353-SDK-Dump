// ScriptStruct /Script/FortniteAI.DigestedTrackingOffsetModifiers
// Size: 0x120
struct FDigestedTrackingOffsetModifiers
{
	float CombatStartDuration; // 0x0 (0x4)
	float TargetLowHealthThreshold; // 0x4 (0x4)
	struct FDigestedTrackingOffsetModifierCurves Curves[0x3]; // 0x8 (0x28) (ARRAY) 
	struct FDigestedTrackingOffsetModifierCurves DistanceCurves[0x3]; // 0x80 (0x28) (ARRAY) 
	struct FDigestedTrackingOffsetModifierCurves InAirHeightCurve; // 0xf8 (0x28)
};

