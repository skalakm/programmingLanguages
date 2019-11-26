% In Elementary Pascal Ledgard & Singer have Sherlock Holmes program
% the Analytical Engine to confirm the identity of the murderer of
% a well known art dealer at the Metropolitan Club in London.
% The murderer can be deduced from the following apparently trivial
% clues.
murderer(X):-hair(X, brown). % the murderer had brown hair

attire(mr_holman, ring). % mr_holman had a ring
attire(mr_pope, watch).  % mr_pope had a watch.

attire(mr_woodley, pincenez):-attire(sir_raymond, tattered_cuffs). % If sir_raymond had tattered cuffs then mr_woodley had the pincenez spectacles
attire(sir_raymond, pincenez):-attire(mr_woodley, tattered_cuffs). % and vice versa

attire(X, tattered_cuffs):-room(X, 16). % A person has tattered cuffs if they were in room 16.

hair(X, black):-room(X, 14). % A person has black hair if they were in room 14.
hair(X, grey):-room(X, 12).
hair(X, brown):-attire(X, pincenez).
hair(X, red):-attire(X, tattered_cuffs).

room(mr_holman, 12). % mr_holman was in room 12
room(sir_raymond, 10).
room(mr_woodley, 16).
room(X, 14):-attire(X, watch).

:- nl, nl, write('The game is afoot....'), nl, nl.
