// ScriptStruct /Script/FortniteGame.TimeOfDayDirectOverrides
// Size: 0x58
struct FTimeOfDayDirectOverrides
{
	unsigned char bOverrideLightIntensity; // 0x0 (0x1)
	unsigned char bOverrideLightColor; // 0x0 (0x1)
	unsigned char bOverrideSkyLightIntensity; // 0x0 (0x1)
	unsigned char bOverrideSkyLightColor; // 0x0 (0x1)
	unsigned char bOverrideFogDensity; // 0x0 (0x1)
	unsigned char bOverrideFogColor; // 0x0 (0x1)
	unsigned char bOverrideFogStartDistance; // 0x0 (0x1)
	unsigned char bOverrideTODMSkylightCubemap; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float OverriddenLightIntensity; // 0x4 (0x4)
	struct FLinearColor OverriddenLightColor; // 0x8 (0x10)
	float OverriddenSkyLightIntensity; // 0x18 (0x4)
	struct FLinearColor OverriddenSkyLightColor; // 0x1c (0x10)
	float OverriddenFogDensity; // 0x2c (0x4)
	float OverriddenFogStartDistance; // 0x30 (0x4)
	struct FLinearColor OverriddenFogColor; // 0x34 (0x10)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	unsigned char OverriddenPostProcessActorClass_48[0x8]; // 0x48 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	int ReplicationIndex; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

