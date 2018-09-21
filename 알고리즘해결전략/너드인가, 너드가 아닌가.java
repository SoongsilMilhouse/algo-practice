import java.util.*;

public class NerdOrNot {
    static int testCase;
    static int numberOfParticipants;
    static List<NerdData> nerdDataList = new ArrayList<>();


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        testCase = sc.nextInt();

        for (int i = 0; i < testCase; i++) {
            int result = 0;
            numberOfParticipants = sc.nextInt();

            for (int j = 0; j < numberOfParticipants; j++) {
                nerdDataList.add(new NerdData(sc.nextInt(), sc.nextInt()));
                if(checkBeforeParticipants(nerdDataList.get(j))) {
                    j--;
                }
                result += nerdDataList.size();
            }
            System.out.println(result);
        }
    }

    static boolean checkBeforeParticipants(NerdData nerdData) {
        for (int i = 0; i < nerdDataList.size(); i++) {
            if (nerdDataList.get(i).numberOfQuestions < nerdData.numberOfQuestions
                    && nerdDataList.get(i).numberOfNoodleBowels < nerdData.numberOfNoodleBowels) {
                nerdDataList.remove(i);
                numberOfParticipants--;
                return true;
            }
        }
        return false;
    }
}

class NerdData {
    int numberOfQuestions;
    int numberOfNoodleBowels;

    NerdData(int numberOfQuestions, int numberOfNoodleBowels) {
        this.numberOfQuestions = numberOfQuestions;
        this.numberOfNoodleBowels = numberOfNoodleBowels;
    }
}