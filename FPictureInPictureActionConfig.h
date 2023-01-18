// ScriptStruct /Script/PictureInPictureDescriptors.PictureInPictureActionConfig
// Size: 0xf0
struct FPictureInPictureActionConfig
{
	enum PictureInPictureAction ActionType; // 0x0 (0x1)
	unsigned char unreflected_1[0xf]; // 0x1 (0xf) 
	struct FSlateBrush ActionBrush; // 0x10 (0xc0)
	struct FText ActionText; // 0xd0 (0x18)
	unsigned char padding_e8[0x8]; // 0xe8 (0x8)
};

