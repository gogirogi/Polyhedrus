#ifndef LEIFTUR_FILTER_MAIN
#define LEIFTUR_FILTER_MAIN

#include "FilterCascade.h"
#include "Parameters.h"

namespace Leiftur
{
	class FilterMain
	{
	private:
		int samplerate;
		int modulationUpdateRate;
		FilterCascade cascadeFilter;

	public:
		FilterMain();
		~FilterMain();
		void Initialize(int samplerate, int bufferSize, int modulationUpdateRate);
		void SetParameter(FilterMainParameters parameter, double value);
		void Process(float* input, int len);
		float* GetOutput();
	private:
		void Update();
	};
}

#endif
