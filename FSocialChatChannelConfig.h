// ScriptStruct /Script/Party.SocialChatChannelConfig
// Size: 0x40
struct FSocialChatChannelConfig
{
	class USocialUser* SocialUser; // 0x0 (0x8)
	unsigned char unreflected_8[0x10]; // 0x8 (0x10) 
	struct TArray<class USocialChatChannel*> ListenChannels; // 0x18 (0x10)
	unsigned char padding_28[0x18]; // 0x28 (0x18)
};

