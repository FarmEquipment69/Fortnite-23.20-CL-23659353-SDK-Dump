// ScriptStruct /Script/ResonanceAudio.ResonanceAudioReverbPluginSettings
// Size: 0x70
struct FResonanceAudioReverbPluginSettings
{
	bool bEnableRoomEffects; // 0x0 (0x1)
	bool bGetTransformFromAudioVolume; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FVector RoomPosition; // 0x8 (0x18)
	struct FQuat RoomRotation; // 0x20 (0x20)
	struct FVector RoomDimensions; // 0x40 (0x18)
	enum ERaMaterialName LeftWallMaterial; // 0x58 (0x1)
	enum ERaMaterialName RightWallMaterial; // 0x59 (0x1)
	enum ERaMaterialName FloorMaterial; // 0x5a (0x1)
	enum ERaMaterialName CeilingMaterial; // 0x5b (0x1)
	enum ERaMaterialName FrontWallMaterial; // 0x5c (0x1)
	enum ERaMaterialName BackWallMaterial; // 0x5d (0x1)
	unsigned char unreflected_5e[0x2]; // 0x5e (0x2) 
	float ReflectionScalar; // 0x60 (0x4)
	float ReverbGain; // 0x64 (0x4)
	float ReverbTimeModifier; // 0x68 (0x4)
	float ReverbBrightness; // 0x6c (0x4)
};

