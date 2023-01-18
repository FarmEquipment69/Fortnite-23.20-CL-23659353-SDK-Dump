// ScriptStruct /Script/Engine.ForceFeedbackChannelDetails
// Size: 0x90
struct FForceFeedbackChannelDetails
{
	unsigned char bAffectsLeftLarge; // 0x0 (0x1)
	unsigned char bAffectsLeftSmall; // 0x0 (0x1)
	unsigned char bAffectsRightLarge; // 0x0 (0x1)
	unsigned char bAffectsRightSmall; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FRuntimeFloatCurve Curve; // 0x8 (0x88)
};

