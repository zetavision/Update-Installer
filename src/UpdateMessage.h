#pragma once

#include <string>

class UpdateMessage
{
	public:
		enum Type
		{
			UpdateFailed,
			UpdateProgress,
			UpdateFinished
		};

		UpdateMessage(void* receiver, Type type)
		{
			init(receiver,type);
		}

		UpdateMessage(Type type)
		{
			init(0,type);
		}

		void init(void* receiver, Type type)
		{
			this->progress = 0;
			this->receiver = receiver;
			this->type = type;
		}

		void* receiver;
		Type type;
		std::string message;
		int progress;
};
