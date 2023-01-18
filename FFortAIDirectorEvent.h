// ScriptStruct /Script/FortniteGame.FortAIDirectorEvent
// Size: 0x20
struct FFortAIDirectorEvent
{
	enum EFortAIDirectorEvent Event; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UObject* EventSource; // 0x8 (0x8)
	class UObject* EventTarget; // 0x10 (0x8)
	float EventValue; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

