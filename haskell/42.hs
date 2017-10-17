-- compile with ghc --make 42.hs
main = do
  inp <- getLine
  if (read inp :: Int)  == 42
    then return ()
    else main
