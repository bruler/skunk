#ifndef K_NN_H_
#define K_NN_H_

namespace skunk {


class knn {
private:
  /* data */

public:
  knn ();
  virtual ~knn ();

  void train();
  void predict();
  void compute_distances();
  void predict_labels();
};


}

#endif  // K_NN_H_
