// ScriptStruct /Script/HmxAudio.CursorSettings
// Size: 0x30
struct FCursorSettings
{
	struct FString eventSourceName; // 0x0 (0x10)
	struct FString trackName; // 0x10 (0x10)
	enum FLookAheadType lookAheadType; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	int lookAheadTicks; // 0x24 (0x4)
	float lookAheadMs; // 0x28 (0x4)
	bool broadcastTextMsgs; // 0x2c (0x1)
	bool broadcastNoteOnMsgs; // 0x2d (0x1)
	bool broadcastNoteOffMsgs; // 0x2e (0x1)
	bool broadcastPitchbendMsgs; // 0x2f (0x1)
};

