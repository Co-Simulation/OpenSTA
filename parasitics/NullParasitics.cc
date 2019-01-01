// OpenSTA, Static Timing Analyzer
// Copyright (c) 2019, Parallax Software, Inc.
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include "Machine.hh"
#include "NullParasitics.hh"

namespace sta {

NullParasitics::NullParasitics(StaState *sta) :
  Parasitics(sta)
{
}

void
NullParasitics::clear()
{
}

void
NullParasitics::finish(Parasitic *)
{
}

void
NullParasitics::save()
{
}

void
NullParasitics::deleteParasitics()
{
}

void
NullParasitics::deleteParasitics(const Net *,
				 const ParasiticAnalysisPt *)
{
}

void
NullParasitics::deleteParasitics(const Pin *, const ParasiticAnalysisPt *)
{
}

void
NullParasitics::deleteParasitic(const Pin *,
				const TransRiseFall *,
				const ParasiticAnalysisPt *,
				Parasitic *)
{
}

float
NullParasitics::capacitance(Parasitic *) const
{
  return 0.0;
}

bool
NullParasitics::hasLumpedElmore(const Pin *,
				const TransRiseFall *,
				const ParasiticAnalysisPt *) const
{
  return false;
}

Parasitic *
NullParasitics::findLumpedElmore(const Pin *,
				 const TransRiseFall *,
				 const ParasiticAnalysisPt *) const
{
  return NULL;
}

bool
NullParasitics::isLumpedElmore(Parasitic *) const
{
  return false;
}

Parasitic *
NullParasitics::makeLumpedElmore(const Pin *,
				 float,
				 const TransRiseFall *,
				 const ParasiticAnalysisPt *)
{
  return NULL;
}

void
NullParasitics::deleteLumpedElmore(const Pin *,
				   const TransRiseFall *,
				   const ParasiticAnalysisPt *)
{
}

bool
NullParasitics::hasPiElmore(const Pin *,
			    const TransRiseFall *,
			    const ParasiticAnalysisPt *) const
{
  return false;
}

Parasitic *
NullParasitics::findPiElmore(const Pin *,
			     const TransRiseFall *,
			     const ParasiticAnalysisPt *) const
{
  return NULL;
}

Parasitic *
NullParasitics::makePiElmore(const Pin *,
			     const TransRiseFall *,
			     const ParasiticAnalysisPt *,
			     float,
			     float,
			     float)
{
  return NULL;
}

void
NullParasitics::deletePiElmore(const Pin *)
{
}

void
NullParasitics::deletePiElmore(const Pin *,
			       const TransRiseFall *,
			       const ParasiticAnalysisPt *)
{
}

bool
NullParasitics::isPiElmore(Parasitic *) const
{
  return false;
}

bool
NullParasitics::isReducedParasiticNetwork(Parasitic *) const
{
  return false;
}

void
NullParasitics::setIsReducedParasiticNetwork(Parasitic *,
					     bool)
{
}

void
NullParasitics::piModel(Parasitic *,
			float &,
			float &,
			float &) const
{
}

void
NullParasitics::setPiModel(Parasitic *,
			   float,
			   float,
			   float)
{
}

void
NullParasitics::findElmore(Parasitic *,
			   const Pin *,
			   float &,
			   bool &) const
{
}

void
NullParasitics::setElmore(Parasitic *,
			  const Pin *,
			  float)
{
}

bool
NullParasitics::isPiModel(Parasitic*) const
{
  return false;
}

bool
NullParasitics::isPiPoleResidue(Parasitic* ) const
{
  return false;
}

bool
NullParasitics::hasPiPoleResidue(const Pin *,
				 const TransRiseFall *,
				 const ParasiticAnalysisPt *) const
{
  return false;
}

Parasitic *
NullParasitics::findPiPoleResidue(const Pin *,
				  const TransRiseFall *,
				  const ParasiticAnalysisPt *) const
{
  return NULL;
}

Parasitic *
NullParasitics::makePiPoleResidue(const Pin *,
				  const TransRiseFall *,
				  const ParasiticAnalysisPt *,
				  float,
				  float,
				  float)
{
  return NULL;
}

Parasitic *
NullParasitics::findPoleResidue(const Parasitic *,
				const Pin *) const
{
 return NULL;
}

void
NullParasitics::setPoleResidue(Parasitic *,
			       const Pin *,
			       ComplexFloatSeq *,
			       ComplexFloatSeq *)
{
}

bool
NullParasitics::isPoleResidue(const Parasitic *) const
{
  return false;
}

size_t
NullParasitics::poleResidueCount(const Parasitic *) const
{
  return 0;
}

void
NullParasitics::poleResidue(const Parasitic *,
			    int,
			    ComplexFloat &,
			    ComplexFloat &) const
{
}

bool
NullParasitics::hasParasiticNetwork(const Net *,
				    const ParasiticAnalysisPt *) const
{
  return false;
}

Parasitic *
NullParasitics::findParasiticNetwork(const Pin *,
				     const ParasiticAnalysisPt *) const
{
  return NULL;
}

bool
NullParasitics::isParasiticNetwork(Parasitic *) const
{
  return false;
}

Parasitic *
NullParasitics::makeParasiticNetwork(Net *,
				     bool,
				     const ParasiticAnalysisPt *)
{
  return NULL;
}

bool
NullParasitics::includesPinCaps(Parasitic *) const
{
  return false;
}

void
NullParasitics::deleteParasiticNetwork(const Net *,
				       const ParasiticAnalysisPt *)
{
}

ParasiticNode *
NullParasitics::ensureParasiticNode(Parasitic *,
				    Net *,
				    int)
{
  return NULL;
}

ParasiticNode *
NullParasitics::ensureParasiticNode(Parasitic *,
				    const Pin *)
{
  return NULL;
}

void
NullParasitics::incrCap(ParasiticNode *,
			float,
			const ParasiticAnalysisPt *)
{
}

void
NullParasitics::makeCouplingCap(const char *,
				ParasiticNode *,
				ParasiticNode *,
				float,
				const ParasiticAnalysisPt *)
{
}

void NullParasitics::makeCouplingCap(const char *,
				     ParasiticNode *,
				     Net *,
				     int,
				     float,
				     const ParasiticAnalysisPt *)
{
}

void
NullParasitics::makeCouplingCap(const char *,
				ParasiticNode *,
				Pin *,
				float,
				const ParasiticAnalysisPt *)
{
}

void
NullParasitics::makeResistor(const char *,
			     ParasiticNode *,
			     ParasiticNode *,
			     float,
			     const ParasiticAnalysisPt *)
{
}

const char *
NullParasitics::name(const ParasiticNode *)
{
  return NULL;
}

const Pin *
NullParasitics::connectionPin(const ParasiticNode *) const
{
  return NULL;
}

ParasiticNode *
NullParasitics::findNode(Parasitic *,
			 const Pin *) const
{
  return NULL;
}

float
NullParasitics::nodeGndCap(const ParasiticNode *,
			   const ParasiticAnalysisPt *) const
{
  return 0.0;
}

ParasiticDeviceIterator *
NullParasitics::deviceIterator(ParasiticNode *) const
{
  return 0;
}

bool
NullParasitics::isResistor(const ParasiticDevice *) const
{
  return false;
}

bool
NullParasitics::isCouplingCap(const ParasiticDevice *) const
{
  return false;
}

const char *
NullParasitics::name(const ParasiticDevice *) const
{
  return NULL;
}

float
NullParasitics::value(const ParasiticDevice *,
		      const ParasiticAnalysisPt *) const
{
  return 0.0;
}

ParasiticNode *
NullParasitics::otherNode(const ParasiticDevice *,
			  ParasiticNode *) const
{
  return NULL;
}

void
NullParasitics::reduceTo(Parasitic *,
			 const Net *,
			 ReduceParasiticsTo ,
			 const TransRiseFall *,
			 const OperatingConditions *,
			 const Corner *,
			 const MinMax *,
			 const ParasiticAnalysisPt *)
{
}

void
NullParasitics::reduceToPiElmore(Parasitic *,
				 const Net *,
				 const TransRiseFall *,
				 const OperatingConditions *,
				 const Corner *,
				 const MinMax *,
				 const ParasiticAnalysisPt *)
{
}

Parasitic *
NullParasitics::reduceToPiElmore(Parasitic *,
				 const Pin *,
				 const TransRiseFall *,
				 const OperatingConditions *,
				 const Corner *,
				 const MinMax *,
				 const ParasiticAnalysisPt *)
{
  return NULL;
}

void
NullParasitics::reduceToPiPoleResidue2(Parasitic *, const Net *,
				       const TransRiseFall *,
				       const OperatingConditions *,
				       const Corner *,
				       const MinMax *,
				       const ParasiticAnalysisPt *)
{
}

Parasitic *
NullParasitics::reduceToPiPoleResidue2(Parasitic *,
				       const Pin *,
				       const TransRiseFall *,
				       const OperatingConditions *,
				       const Corner *,
				       const MinMax *,
				       const ParasiticAnalysisPt *)
{
  return NULL;
}

Parasitic *
NullParasitics::estimatePiElmore(const Pin *,
				 const TransRiseFall *,
				 const Wireload *,
				 float,
				 float,
				 const OperatingConditions *,
				 const Corner *,
				 const MinMax *,
				 const ParasiticAnalysisPt *)
{
  return NULL;
}

void
NullParasitics::disconnectPinBefore(const Pin *)
{
}

} // namespace
