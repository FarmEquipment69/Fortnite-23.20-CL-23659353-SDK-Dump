// ScriptStruct /Script/FortniteGame.AthenaQuickChatActiveEntry
// Size: 0x14
struct FAthenaQuickChatActiveEntry
{
	struct TWeakObjectPtr<class UAthenaQuickChatBank> Bank; // 0x0 (0x8)
	struct TWeakObjectPtr<class UObject> ContextObject; // 0x8 (0x8)
	int16_t ContextValue; // 0x10 (0x2)
	int8_t Index; // 0x12 (0x1)
	unsigned char padding_13[0x1]; // 0x13 (0x1)
};

