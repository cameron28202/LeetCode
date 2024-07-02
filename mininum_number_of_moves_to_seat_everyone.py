class Solution(object):
    def minMovesToSeat(self, seats, students):
        """
        :type seats: List[int]
        :type students: List[int]
        :rtype: int
        """

        seats.sort()
        students.sort()

        num_moves = []
        for i in range(len(students)):
            num_moves.append(students[i] - seats[i])

        for i in range(len(num_moves)):
            if num_moves[i] > 0:
                students[i] -= num_moves[i]
            elif num_moves < 0:
                students[i] += num_moves[i]

        abs_list = [abs(number) for number in num_moves]

        return sum(abs_list)